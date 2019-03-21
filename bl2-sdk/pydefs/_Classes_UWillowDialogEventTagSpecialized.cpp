#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UWillowDialogEventTagSpecialized()
{
    class_< UWillowDialogEventTagSpecialized, bases< UWillowDialogEventTag >  , boost::noncopyable>("UWillowDialogEventTagSpecialized", no_init)
        .def_readwrite("SpecializationOfEventTag", &UWillowDialogEventTagSpecialized::SpecializationOfEventTag)
        .def_readwrite("SpecializationForOtherNameTags", &UWillowDialogEventTagSpecialized::SpecializationForOtherNameTags)
        .def("StaticClass", &UWillowDialogEventTagSpecialized::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}