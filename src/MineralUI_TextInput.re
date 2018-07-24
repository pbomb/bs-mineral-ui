[@bs.deriving jsConverter]
type size = [ | `small | `medium | `large | `jumbo];
let mapSizeToJs = (. size) => sizeToJs(size);

[@bs.deriving jsConverter]
type variant = [ | `danger | `success | `warning];
let mapVariantToJs = (. variant) => variantToJs(variant);

[@bs.deriving jsConverter]
type inputType = [
  | `date
  | [@bs.as "datetime-local"] `dateTimeLocal
  | `email
  | `month
  | `number
  | `password
  | `search
  | `tel
  | `text
  | `time
  | `url
  | `week
];
let mapInputTypeToJs = (. inputType) => inputTypeToJs(inputType);

[@bs.obj]
external makeProps :
  (
    ~defaultValue: string=?,
    ~disabled: bool=?,
    ~iconEnd: ReasonReact.reactElement=?,
    ~iconStart: ReasonReact.reactElement=?,
    ~inputRef: ReasonReact.reactElement => unit=?,
    ~invalid: bool=?,
    ~onChange: 'a => unit=?,
    ~prefix: ReasonReact.reactElement=?,
    ~readOnly: bool=?,
    ~required: bool=?,
    ~rootProps: Js.Dict.t(string)=?,
    ~size: string=?,
    ~suffix: ReasonReact.reactElement=?,
    ~_type: string=?,
    ~value: string=?,
    ~variant: string=?,
    unit
  ) =>
  _ =
  "";
[@bs.module "mineral-ui/TextInput"]
external reactClass : ReasonReact.reactClass = "default";
let make =
    (
      ~defaultValue: option(string)=?,
      ~disabled: option(bool)=?,
      ~iconEnd: option(ReasonReact.reactElement)=?,
      ~iconStart: option(ReasonReact.reactElement)=?,
      ~inputRef: option(ReasonReact.reactElement => unit)=?,
      ~invalid: option(bool)=?,
      ~onChange: option('a => unit)=?,
      ~prefix: option(ReasonReact.reactElement)=?,
      ~readOnly: option(bool)=?,
      ~required: option(bool)=?,
      ~rootProps: option(Js.Dict.t(string))=?,
      ~size: option(size)=?,
      ~suffix: option(ReasonReact.reactElement)=?,
      ~_type: option(inputType)=?,
      ~value: option(string)=?,
      ~variant: option(variant)=?,
      children,
    ) =>
  ReasonReact.wrapJsForReason(
    ~reactClass,
    ~props=
      makeProps(
        ~disabled?,
        ~iconEnd?,
        ~iconStart?,
        ~defaultValue?,
        ~inputRef?,
        ~invalid?,
        ~onChange?,
        ~prefix?,
        ~readOnly?,
        ~required?,
        ~rootProps?,
        ~size=?Js.Option.map(mapSizeToJs, size),
        ~suffix?,
        ~_type=?Js.Option.map(mapInputTypeToJs, _type),
        ~value?,
        ~variant=?Js.Option.map(mapVariantToJs, variant),
        (),
      ),
    children,
  );

let cmp = reactClass;
