#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_ULine()
{
    py::class_< ULine,  UObject   >("ULine")
        .def_readwrite("Parent", &ULine::Parent)
        .def_readwrite("LineSegments", &ULine::LineSegments)
        .def_readwrite("Verts", &ULine::Verts)
        .def_readwrite("RegionMaterial", &ULine::RegionMaterial)
        .def_readwrite("SIZoneMaterial", &ULine::SIZoneMaterial)
        .def_readwrite("SIRetreatMaterial", &ULine::SIRetreatMaterial)
        .def_readwrite("SIStealthMaterial", &ULine::SIStealthMaterial)
        .def_readwrite("CombatZoneID", &ULine::CombatZoneID)
        .def_readwrite("CombatZoneName", &ULine::CombatZoneName)
        .def_readwrite("RegionData", &ULine::RegionData)
        .def("StaticClass", &ULine::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}