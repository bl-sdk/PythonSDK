#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_ARoute()
{
    class_< ARoute, bases< AInfo >  , boost::noncopyable>("ARoute", no_init)
        .def_readwrite("VfTable_IEditorLinkSelectionInterface", &ARoute::VfTable_IEditorLinkSelectionInterface)
        .def_readwrite("RouteType", &ARoute::RouteType)
        .def_readwrite("RouteList", &ARoute::RouteList)
        .def_readwrite("FudgeFactor", &ARoute::FudgeFactor)
        .def_readwrite("RouteIndexOffset", &ARoute::RouteIndexOffset)
        .def("StaticClass", &ARoute::StaticClass, return_value_policy< reference_existing_object >())
        .def("MoveOntoRoutePath", &ARoute::MoveOntoRoutePath)
        .def("ResolveRouteIndex", &ARoute::ResolveRouteIndex)
        .staticmethod("StaticClass")
  ;
}