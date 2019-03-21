#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_AWillowArtifact()
{
    class_< AWillowArtifact, bases< AWillowEquipAbleItem >  , boost::noncopyable>("AWillowArtifact", no_init)
        .def("StaticClass", &AWillowArtifact::StaticClass, return_value_policy< reference_existing_object >())
        .def("GetItemCardTopSectionString", &AWillowArtifact::GetItemCardTopSectionString)
        .def("GetAttributePresentationOverride", &AWillowArtifact::GetAttributePresentationOverride, return_value_policy< reference_existing_object >())
        .def("SetElementalFrame", &AWillowArtifact::SetElementalFrame)
        .def("ValidateDefinitions", &AWillowArtifact::ValidateDefinitions)
        .def("GetEquippedStat", &AWillowArtifact::GetEquippedStat)
        .def("eventGetEquipmentLocation", &AWillowArtifact::eventGetEquipmentLocation)
        .staticmethod("StaticClass")
  ;
}