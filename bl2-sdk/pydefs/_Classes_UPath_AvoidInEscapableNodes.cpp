#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UPath_AvoidInEscapableNodes()
{
    class_< UPath_AvoidInEscapableNodes, bases< UPathConstraint >  , boost::noncopyable>("UPath_AvoidInEscapableNodes", no_init)
        .def_readwrite("Radius", &UPath_AvoidInEscapableNodes::Radius)
        .def_readwrite("Height", &UPath_AvoidInEscapableNodes::Height)
        .def_readwrite("MaxFallSpeed", &UPath_AvoidInEscapableNodes::MaxFallSpeed)
        .def_readwrite("MoveFlags", &UPath_AvoidInEscapableNodes::MoveFlags)
        .def("StaticClass", &UPath_AvoidInEscapableNodes::StaticClass, return_value_policy< reference_existing_object >())
        .def("Recycle", &UPath_AvoidInEscapableNodes::Recycle)
        .def("DontGetStuck", &UPath_AvoidInEscapableNodes::DontGetStuck)
        .def("CachePawnReacFlags", &UPath_AvoidInEscapableNodes::CachePawnReacFlags)
        .staticmethod("StaticClass")
  ;
}