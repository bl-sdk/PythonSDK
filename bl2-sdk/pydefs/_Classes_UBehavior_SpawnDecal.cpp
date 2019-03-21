#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UBehavior_SpawnDecal()
{
    class_< UBehavior_SpawnDecal, bases< UBehaviorBase >  , boost::noncopyable>("UBehavior_SpawnDecal", no_init)
        .def_readwrite("Material", &UBehavior_SpawnDecal::Material)
        .def_readwrite("BoneName", &UBehavior_SpawnDecal::BoneName)
        .def_readwrite("AlignToAxis", &UBehavior_SpawnDecal::AlignToAxis)
        .def_readwrite("Size", &UBehavior_SpawnDecal::Size)
        .def_readwrite("SpawnRotation", &UBehavior_SpawnDecal::SpawnRotation)
        .def_readwrite("SpawnLocation", &UBehavior_SpawnDecal::SpawnLocation)
        .def_readwrite("Thickness", &UBehavior_SpawnDecal::Thickness)
        .def("StaticClass", &UBehavior_SpawnDecal::StaticClass, return_value_policy< reference_existing_object >())
        .def("ApplyBehaviorToContext", &UBehavior_SpawnDecal::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}