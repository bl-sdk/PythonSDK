#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UAnimNotify()
{
    class_< UAnimNotify, bases< UObject >  , boost::noncopyable>("UAnimNotify", no_init)
        .def("StaticClass", &UAnimNotify::StaticClass, return_value_policy< reference_existing_object >())
        .def("FindNextNotifyOfClass", &UAnimNotify::FindNextNotifyOfClass)
        .staticmethod("StaticClass")
  ;
}