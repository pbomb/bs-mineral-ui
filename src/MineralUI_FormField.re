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
/* FormField documented props */
external makeProps :
  (
    ~caption: ReasonReact.reactElement=?,
    ~hideLabel: bool=?,
    ~input: ReasonReact.reactClass=?,
    ~label: ReasonReact.reactElement=?,
    ~onChange: 'a => unit=?,
    ~required: bool=?,
    ~rootProps: Js.Dict.t(string)=?,
    ~secondaryText: ReasonReact.reactElement=?,
    ~value: string=?,
    ~variant: string=?,
    ~defaultValue: string=?,
    ~disabled: bool=?,
    ~iconEnd: ReasonReact.reactElement=?,
    ~iconStart: ReasonReact.reactElement=?,
    ~inputRef: ReasonReact.reactElement => unit=?,
    ~invalid: bool=?,
    ~prefix: ReasonReact.reactElement=?,
    ~readOnly: bool=?,
    ~size: string=?,
    ~suffix: ReasonReact.reactElement=?,
    ~_type: string=?,
    unit
  ) =>
  _ =
  "";
[@bs.module "mineral-ui/Form/FormField"]
external reactClass : ReasonReact.reactClass = "default";
let make =
    (
      ~caption: option(ReasonReact.reactElement)=?,
      ~hideLabel: option(bool)=?,
      ~input: option(ReasonReact.reactClass)=?,
      ~label: option(ReasonReact.reactElement)=?,
      ~onChange: option('a => unit)=?,
      ~required: option(bool)=?,
      ~rootProps: option(Js.Dict.t(string))=?,
      ~secondaryText: option(ReasonReact.reactElement)=?,
      ~value: option(string)=?,
      ~variant: option(variant)=?,
      ~defaultValue: option(string)=?,
      ~disabled: option(bool)=?,
      ~iconEnd: option(ReasonReact.reactElement)=?,
      ~iconStart: option(ReasonReact.reactElement)=?,
      ~inputRef: option(ReasonReact.reactElement => unit)=?,
      ~invalid: option(bool)=?,
      ~prefix: option(ReasonReact.reactElement)=?,
      ~readOnly: option(bool)=?,
      ~size: option(size)=?,
      ~suffix: option(ReasonReact.reactElement)=?,
      ~_type: option(inputType)=?,
      children,
    ) =>
  ReasonReact.wrapJsForReason(
    ~reactClass,
    ~props=
      makeProps(
        ~caption?,
        ~input?,
        ~hideLabel?,
        ~label?,
        ~onChange?,
        ~required?,
        ~rootProps?,
        ~secondaryText?,
        ~value?,
        ~variant=?Js.Option.map(mapVariantToJs, variant),
        ~disabled?,
        ~iconEnd?,
        ~iconStart?,
        ~defaultValue?,
        ~inputRef?,
        ~invalid?,
        ~prefix?,
        ~readOnly?,
        ~size=?Js.Option.map(mapSizeToJs, size),
        ~suffix?,
        ~_type=?Js.Option.map(mapInputTypeToJs, _type),
        (),
      ),
      children
  );
