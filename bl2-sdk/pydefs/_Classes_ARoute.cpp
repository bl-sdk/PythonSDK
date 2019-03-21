#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_ARoute()
{
    py::class_< ARoute,  AInfo   >("ARoute")
        .def_readwrite("VfTable_IEditorLinkSelectionInterface", &ARoute::VfTable_IEditorLinkSelectionInterface)
        .def_readwrite("RouteType", &ARoute::RouteType)
        .def_readwrite("RouteList", &ARoute::RouteList)
        .def_readwrite("FudgeFactor", &ARoute::FudgeFactor)
        .def_readwrite("RouteIndexOffset", &ARoute::RouteIndexOffset)
        .def("StaticClass", &ARoute::StaticClass, py::return_value_policy::reference)
        .def("MoveOntoRoutePath", &ARoute::MoveOntoRoutePath)
        .def("ResolveRouteIndex", &ARoute::ResolveRouteIndex)
        .staticmethod("StaticClass")
  ;
}