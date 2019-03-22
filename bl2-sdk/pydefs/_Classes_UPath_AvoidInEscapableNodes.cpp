#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UPath_AvoidInEscapableNodes(py::module &m)
{
    py::class_< UPath_AvoidInEscapableNodes,  UPathConstraint   >(m, "UPath_AvoidInEscapableNodes")
        .def_readwrite("Radius", &UPath_AvoidInEscapableNodes::Radius)
        .def_readwrite("Height", &UPath_AvoidInEscapableNodes::Height)
        .def_readwrite("MaxFallSpeed", &UPath_AvoidInEscapableNodes::MaxFallSpeed)
        .def_readwrite("MoveFlags", &UPath_AvoidInEscapableNodes::MoveFlags)
        .def("StaticClass", &UPath_AvoidInEscapableNodes::StaticClass, py::return_value_policy::reference)
        .def("Recycle", &UPath_AvoidInEscapableNodes::Recycle)
        .def("DontGetStuck", &UPath_AvoidInEscapableNodes::DontGetStuck)
        .def("CachePawnReacFlags", &UPath_AvoidInEscapableNodes::CachePawnReacFlags)
          ;
}