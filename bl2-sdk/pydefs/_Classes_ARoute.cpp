#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_ARoute(py::module &m)
{
    py::class_< ARoute,  AInfo   >(m, "ARoute")
        .def_readwrite("VfTable_IEditorLinkSelectionInterface", &ARoute::VfTable_IEditorLinkSelectionInterface)
        .def_readwrite("RouteType", &ARoute::RouteType)
        .def_readwrite("RouteList", &ARoute::RouteList)
        .def_readwrite("FudgeFactor", &ARoute::FudgeFactor)
        .def_readwrite("RouteIndexOffset", &ARoute::RouteIndexOffset)
        .def("MoveOntoRoutePath", &ARoute::MoveOntoRoutePath)
        .def("ResolveRouteIndex", &ARoute::ResolveRouteIndex)
          ;
}