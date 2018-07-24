[@bs.deriving jsConverter]
type alignItems = [ | `start | [@bs.as "end"] `end_ | `center | `stretch];
let mapAlignItemsToJs = (. alignItems) => alignItemsToJs(alignItems);

[@bs.deriving jsConverter]
type gutterWidth = [ | `xxs | `xs | `sm | `md | `lg | `xl | `xxl];
let mapGutterWidthToJs = (. gutterWidth) => gutterWidthToJs(gutterWidth);

[@bs.obj]
external makeProps :
  (~columns: int=?, ~alignItems: string=?, ~gutterWidth: string=?, unit) => _ =
  "";
[@bs.module "mineral-ui/Grid"]
external reactClass : ReasonReact.reactClass = "default";
let make =
    (
      ~columns: option(int)=?,
      ~alignItems: option(alignItems)=?,
      ~gutterWidth: option(gutterWidth)=?,
      children,
    ) =>
  ReasonReact.wrapJsForReason(
    ~reactClass,
    ~props=
      makeProps(
        ~columns?,
        ~alignItems=?Js.Option.map(mapAlignItemsToJs, alignItems),
        ~gutterWidth=?Js.Option.map(mapGutterWidthToJs, gutterWidth),
        (),
      ),
    children,
  );
