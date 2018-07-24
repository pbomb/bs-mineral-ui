[@bs.deriving jsConverter]
type align = [ | `start | `end_ | `center | `justify];
let mapAlignToJs = (. align) => alignToJs(align);

/* type fontWeightWord;
[@bs.obj]
external stringFontWeight :
  (
    ~regular: string=?,
    ~semiBold: string=?,
    ~bold: string=?,
    ~extraBold: string=?,
    unit
  ) =>
  fontWeightWord =
  "";
let makeFontWeightWord = (~regular=?, ~semiBold=?, ~bold=?, ~extraBold=?, ()) =>
  stringFontWeight(
    ~regular=?regular |> Js.Option.map([@bs] (b => string_of_int(b))),
    ~semiBold=?semiBold |> Js.Option.map([@bs] (b => string_of_int(b))),
    ~bold=?bold |> Js.Option.map([@bs] (b => string_of_int(b))),
    ~extraBold=?extraBold |> Js.Option.map([@bs] (b => string_of_int(b))),
    ()
  );
type fontWeight(_) =
  | FontWeightAsNumber(int): fontWeight(int)
  | FontWeightAsWord(fontWeightWord): fontWeight(fontWeightWord);
let fontWeightToProp = (type a, fontWeight: fontWeight(a)) : a =>
  switch fontWeight {
  | FontWeightAsNumber(int) => int
  | FontWeightAsWord(complexFontWeight) => complexFontWeight
  }; */

[@bs.deriving jsConverter]
type fontWeight = [
  | `regular
  | `semiBold
  | `bold
  | `extraBold
];
let mapFontWeightToJs = (. fontWeight) => fontWeightToJs(fontWeight);

[@bs.deriving jsConverter]
type appearance = [
  | `h1
  | `h2
  | `h3
  | `h4
  | `h5
  | `h6
  | `mouse
  | `p
  | `prose
];
let mapAppearanceToJs = (. appearance) => appearanceToJs(appearance);

[@bs.obj]
external makeProps :
  (
    ~color: string=?,
    ~element: string=?,
    ~fontWeight: 'a=?,
    ~_inherit: bool=?,
    ~noMargins: bool=?,
    ~parentElement: string=?,
    ~minimal: bool=?,
    ~primary: bool=?,
    ~align: string=?,
    ~_type: string=?,
    ~appearance: string=?,
    unit
  ) =>
  _ =
  "";
[@bs.module "mineral-ui/Text"]
external reactClass : ReasonReact.reactClass = "default";
let make =
    (
      ~color: option(string)=?,
      ~element: option(string)=?,
      ~_inherit: option(bool)=?,
      ~noMargins: option(bool)=?,
      ~parentElement: option(string)=?,
      ~minimal: option(bool)=?,
      ~fontWeight: option(fontWeight)=?,
      ~primary: option(bool)=?,
      ~align: option(align)=?,
      ~_type: option(string)=?,
      ~appearance: option(appearance)=?,
      children,
    ) =>
  ReasonReact.wrapJsForReason(
    ~reactClass,
    ~props=
      makeProps(
        ~element?,
        ~fontWeight=?Js.Option.map(mapFontWeightToJs, fontWeight),
        ~_inherit?,
        ~noMargins?,
        ~color?,
        ~parentElement?,
        ~minimal?,
        ~primary?,
        ~align=?Js.Option.map(mapAlignToJs, align),
        ~_type?,
        ~appearance=?Js.Option.map(mapAppearanceToJs, appearance),
        (),
      ),
      children
  );
