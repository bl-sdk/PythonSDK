#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_ULine()
{
    class_< ULine, bases< UObject >  , boost::noncopyable>("ULine", no_init)
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
        .def("StaticClass", &ULine::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}