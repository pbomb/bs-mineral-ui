// Generated by BUCKLESCRIPT VERSION 4.0.0, PLEASE EDIT WITH CARE
'use strict';

var Js_option = require("bs-platform/lib/js/js_option.js");
var Js_mapperRt = require("bs-platform/lib/js/js_mapperRt.js");
var ReasonReact = require("reason-react/lib/js/src/ReasonReact.js");
var Js_primitive = require("bs-platform/lib/js/js_primitive.js");
var FormField = require("mineral-ui/Form/FormField");

var jsMapperConstantArray = /* array */[
  /* tuple */[
    -702382193,
    "jumbo"
  ],
  /* tuple */[
    -272944197,
    "large"
  ],
  /* tuple */[
    -20425611,
    "medium"
  ],
  /* tuple */[
    -9768761,
    "small"
  ]
];

function sizeToJs(param) {
  return Js_mapperRt.binarySearch(4, param, jsMapperConstantArray);
}

function sizeFromJs(param) {
  return Js_mapperRt.revSearch(4, jsMapperConstantArray, param);
}

var mapSizeToJs = sizeToJs;

var jsMapperConstantArray$1 = /* array */[
  /* tuple */[
    164354652,
    "warning"
  ],
  /* tuple */[
    512905955,
    "danger"
  ],
  /* tuple */[
    944645571,
    "success"
  ]
];

function variantToJs(param) {
  return Js_mapperRt.binarySearch(3, param, jsMapperConstantArray$1);
}

function variantFromJs(param) {
  return Js_mapperRt.revSearch(3, jsMapperConstantArray$1, param);
}

var mapVariantToJs = variantToJs;

var jsMapperConstantArray$2 = /* array */[
  /* tuple */[
    -1033677266,
    "date"
  ],
  /* tuple */[
    -925883621,
    "password"
  ],
  /* tuple */[
    -856044371,
    "text"
  ],
  /* tuple */[
    -855847923,
    "time"
  ],
  /* tuple */[
    -822779916,
    "week"
  ],
  /* tuple */[
    -487088280,
    "search"
  ],
  /* tuple */[
    -271659236,
    "email"
  ],
  /* tuple */[
    5791195,
    "tel"
  ],
  /* tuple */[
    5843823,
    "url"
  ],
  /* tuple */[
    207603520,
    "month"
  ],
  /* tuple */[
    561678025,
    "number"
  ],
  /* tuple */[
    983036432,
    "datetime-local"
  ]
];

function inputTypeToJs(param) {
  return Js_mapperRt.binarySearch(12, param, jsMapperConstantArray$2);
}

function inputTypeFromJs(param) {
  return Js_mapperRt.revSearch(12, jsMapperConstantArray$2, param);
}

var mapInputTypeToJs = inputTypeToJs;

function make(caption, hideLabel, input, label, onChange, required, rootProps, secondaryText, value, variant, defaultValue, disabled, iconEnd, iconStart, inputRef, invalid, prefix, readOnly, size, suffix, _type, children) {
  var tmp = { };
  if (caption) {
    tmp.caption = Js_primitive.valFromOption(caption);
  }
  if (hideLabel) {
    tmp.hideLabel = Js_primitive.valFromOption(hideLabel);
  }
  if (input) {
    tmp.input = Js_primitive.valFromOption(input);
  }
  if (label) {
    tmp.label = Js_primitive.valFromOption(label);
  }
  if (onChange) {
    tmp.onChange = Js_primitive.valFromOption(onChange);
  }
  if (required) {
    tmp.required = Js_primitive.valFromOption(required);
  }
  if (rootProps) {
    tmp.rootProps = Js_primitive.valFromOption(rootProps);
  }
  if (secondaryText) {
    tmp.secondaryText = Js_primitive.valFromOption(secondaryText);
  }
  if (value) {
    tmp.value = Js_primitive.valFromOption(value);
  }
  var tmp$1 = Js_option.map(mapVariantToJs, variant);
  if (tmp$1) {
    tmp.variant = Js_primitive.valFromOption(tmp$1);
  }
  if (defaultValue) {
    tmp.defaultValue = Js_primitive.valFromOption(defaultValue);
  }
  if (disabled) {
    tmp.disabled = Js_primitive.valFromOption(disabled);
  }
  if (iconEnd) {
    tmp.iconEnd = Js_primitive.valFromOption(iconEnd);
  }
  if (iconStart) {
    tmp.iconStart = Js_primitive.valFromOption(iconStart);
  }
  if (inputRef) {
    tmp.inputRef = Js_primitive.valFromOption(inputRef);
  }
  if (invalid) {
    tmp.invalid = Js_primitive.valFromOption(invalid);
  }
  if (prefix) {
    tmp.prefix = Js_primitive.valFromOption(prefix);
  }
  if (readOnly) {
    tmp.readOnly = Js_primitive.valFromOption(readOnly);
  }
  var tmp$2 = Js_option.map(mapSizeToJs, size);
  if (tmp$2) {
    tmp.size = Js_primitive.valFromOption(tmp$2);
  }
  if (suffix) {
    tmp.suffix = Js_primitive.valFromOption(suffix);
  }
  var tmp$3 = Js_option.map(mapInputTypeToJs, _type);
  if (tmp$3) {
    tmp.type = Js_primitive.valFromOption(tmp$3);
  }
  return ReasonReact.wrapJsForReason(FormField.default, tmp, children);
}

exports.sizeToJs = sizeToJs;
exports.sizeFromJs = sizeFromJs;
exports.mapSizeToJs = mapSizeToJs;
exports.variantToJs = variantToJs;
exports.variantFromJs = variantFromJs;
exports.mapVariantToJs = mapVariantToJs;
exports.inputTypeToJs = inputTypeToJs;
exports.inputTypeFromJs = inputTypeFromJs;
exports.mapInputTypeToJs = mapInputTypeToJs;
exports.make = make;
/* ReasonReact Not a pure module */
