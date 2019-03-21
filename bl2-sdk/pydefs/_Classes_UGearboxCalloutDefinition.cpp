#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UGearboxCalloutDefinition()
{
    class_< UGearboxCalloutDefinition, bases< UGBXDefinition >  , boost::noncopyable>("UGearboxCalloutDefinition", no_init)
        .def_readwrite("MaxCallOutDistance", &UGearboxCalloutDefinition::MaxCallOutDistance)
        .def_readwrite("MinCallOutDistance", &UGearboxCalloutDefinition::MinCallOutDistance)
        .def_readwrite("MinRarityCallOutLevel", &UGearboxCalloutDefinition::MinRarityCallOutLevel)
        .def("StaticClass", &UGearboxCalloutDefinition::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}