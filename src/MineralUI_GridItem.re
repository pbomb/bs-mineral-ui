[@bs.obj] external makeProps : (~span: int=?, unit) => _ = "";
[@bs.module "mineral-ui/Grid"]
external reactClass : ReasonReact.reactClass = "GridItem";
let make = (~span: option(int)=?, children) =>
  ReasonReact.wrapJsForReason(
    ~reactClass,
    ~props=makeProps(~span?, ()),
    children,
  );
