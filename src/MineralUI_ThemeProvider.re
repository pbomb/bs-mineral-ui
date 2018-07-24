[@bs.deriving abstract]
type themeProp = {
  [@bs.optional]
  backgroundColor_active: string,
  [@bs.optional]
  color: string,
};

[@bs.deriving abstract]
type createThemeColors = {
  [@bs.optional]
  theme: string,
  [@bs.optional]
  danger: string,
  [@bs.optional]
  success: string,
  [@bs.optional]
  warning: string,
  [@bs.optional]
  black: string,
  [@bs.optional]
  gray: string,
  [@bs.optional]
  white: string,
};

[@bs.deriving abstract]
type createThemeOptions = {
  [@bs.optional]
  colors: createThemeColors,
  [@bs.optional]
  overrides: string,
};

[@bs.obj] external makeProps : (~theme: themeProp=?, unit) => _ = "";

[@bs.module "mineral-ui/themes"]
external reactClass : ReasonReact.reactClass = "ThemeProvider";
let make = (~theme: option(themeProp)=?, children) =>
  ReasonReact.wrapJsForReason(
    ~reactClass,
    ~props=makeProps(~theme?, ()),
    children,
  );

[@bs.module "mineral-ui/themes"]
external createTheme : createThemeOptions => themeProp = "";
