[@bs.deriving jsConverter]
type size = [ | `small | `medium | `large | `jumbo];
let mapSizeToJs = (. size) => sizeToJs(size);

[@bs.deriving jsConverter]
type variant = [ | `danger | `success | `warning];
let mapVariantToJs = (. variant) => variantToJs(variant);

[@bs.obj]
external makeProps :
  (
    ~circular: bool=?,
    ~disabled: bool=?,
    ~element: ReasonReact.reactElement=?,
    ~fullWidth: bool=?,
    ~iconEnd: ReasonReact.reactElement=?,
    ~iconStart: ReasonReact.reactElement=?,
    ~minimal: bool=?,
    ~onClick: ReactEventRe.Mouse.t => unit=?,
    ~primary: bool=?,
    ~size: string=?,
    ~_type: string=?,
    ~variant: string=?,
    unit
  ) =>
  _ =
  "";
[@bs.module "mineral-ui/Button"]
external reactClass : ReasonReact.reactClass = "default";
let make =
    (
      ~circular: option(bool)=?,
      ~disabled: option(bool)=?,
      ~element: option(ReasonReact.reactElement)=?,
      ~fullWidth: option(bool)=?,
      ~iconEnd: option(ReasonReact.reactElement)=?,
      ~iconStart: option(ReasonReact.reactElement)=?,
      ~minimal: option(bool)=?,
      ~onClick: option(ReactEventRe.Mouse.t => unit)=?,
      ~primary: option(bool)=?,
      ~size: option(size)=?,
      ~_type: option(string)=?,
      ~variant: option(variant)=?,
      children,
    ) =>
  ReasonReact.wrapJsForReason(
    ~reactClass,
    ~props=
      makeProps(
        ~circular?,
        ~disabled?,
        ~element?,
        ~fullWidth?,
        ~iconEnd?,
        ~iconStart?,
        ~minimal?,
        ~onClick?,
        ~primary?,
        ~size=?Js.Option.map(mapSizeToJs, size),
        ~_type?,
        ~variant=?Js.Option.map(mapVariantToJs, variant),
        (),
      ),
    children,
  );
