#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UWillowDialogEventTag()
{
    class_< UWillowDialogEventTag, bases< UGearboxDialogEventTag >  , boost::noncopyable>("UWillowDialogEventTag", no_init)
        .def("StaticClass", &UWillowDialogEventTag::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}