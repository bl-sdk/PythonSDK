#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UWillowSeqVar_TimeOfDay()
{
    class_< UWillowSeqVar_TimeOfDay, bases< USeqVar_Float >  , boost::noncopyable>("UWillowSeqVar_TimeOfDay", no_init)
        .def("StaticClass", &UWillowSeqVar_TimeOfDay::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}