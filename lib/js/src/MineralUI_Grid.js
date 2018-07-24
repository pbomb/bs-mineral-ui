// Generated by BUCKLESCRIPT VERSION 4.0.0, PLEASE EDIT WITH CARE
'use strict';

var Js_option = require("bs-platform/lib/js/js_option.js");
var Js_mapperRt = require("bs-platform/lib/js/js_mapperRt.js");
var ReasonReact = require("reason-react/lib/js/src/ReasonReact.js");
var Js_primitive = require("bs-platform/lib/js/js_primitive.js");
var Grid = require("mineral-ui/Grid");

var jsMapperConstantArray = /* array */[
  /* tuple */[
    -1021944796,
    "end"
  ],
  /* tuple */[
    -162316795,
    "stretch"
  ],
  /* tuple */[
    67859554,
    "start"
  ],
  /* tuple */[
    98248149,
    "center"
  ]
];

function alignItemsToJs(param) {
  return Js_mapperRt.binarySearch(4, param, jsMapperConstantArray);
}

function alignItemsFromJs(param) {
  return Js_mapperRt.revSearch(4, jsMapperConstantArray, param);
}

var mapAlignItemsToJs = alignItemsToJs;

var jsMapperConstantArray$1 = /* array */[
  /* tuple */[
    24187,
    "lg"
  ],
  /* tuple */[
    24407,
    "md"
  ],
  /* tuple */[
    25754,
    "sm"
  ],
  /* tuple */[
    26868,
    "xl"
  ],
  /* tuple */[
    26875,
    "xs"
  ],
  /* tuple */[
    5994348,
    "xxl"
  ],
  /* tuple */[
    5994355,
    "xxs"
  ]
];

function gutterWidthToJs(param) {
  return Js_mapperRt.binarySearch(7, param, jsMapperConstantArray$1);
}

function gutterWidthFromJs(param) {
  return Js_mapperRt.revSearch(7, jsMapperConstantArray$1, param);
}

var mapGutterWidthToJs = gutterWidthToJs;

function make(columns, alignItems, gutterWidth, children) {
  var tmp = { };
  if (columns) {
    tmp.columns = Js_primitive.valFromOption(columns);
  }
  var tmp$1 = Js_option.map(mapAlignItemsToJs, alignItems);
  if (tmp$1) {
    tmp.alignItems = Js_primitive.valFromOption(tmp$1);
  }
  var tmp$2 = Js_option.map(mapGutterWidthToJs, gutterWidth);
  if (tmp$2) {
    tmp.gutterWidth = Js_primitive.valFromOption(tmp$2);
  }
  return ReasonReact.wrapJsForReason(Grid.default, tmp, children);
}

exports.alignItemsToJs = alignItemsToJs;
exports.alignItemsFromJs = alignItemsFromJs;
exports.mapAlignItemsToJs = mapAlignItemsToJs;
exports.gutterWidthToJs = gutterWidthToJs;
exports.gutterWidthFromJs = gutterWidthFromJs;
exports.mapGutterWidthToJs = mapGutterWidthToJs;
exports.make = make;
/* ReasonReact Not a pure module */