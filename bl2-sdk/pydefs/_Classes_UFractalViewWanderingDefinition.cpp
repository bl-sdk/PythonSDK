#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UFractalViewWanderingDefinition()
{
    class_< UFractalViewWanderingDefinition, bases< UGBXDefinition >  , boost::noncopyable>("UFractalViewWanderingDefinition", no_init)
        .def_readwrite("PseudoRandomPoints", &UFractalViewWanderingDefinition::PseudoRandomPoints)
        .def_readwrite("NumberOfOctaves", &UFractalViewWanderingDefinition::NumberOfOctaves)
        .def("StaticClass", &UFractalViewWanderingDefinition::StaticClass, return_value_policy< reference_existing_object >())
        .def("GenerateNewRandomPoints", &UFractalViewWanderingDefinition::GenerateNewRandomPoints)
        .staticmethod("StaticClass")
  ;
}