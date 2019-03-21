#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_ULocationFilter_MustNotHaveLOS()
{
    class_< ULocationFilter_MustNotHaveLOS, bases< ULocationFilter >  , boost::noncopyable>("ULocationFilter_MustNotHaveLOS", no_init)
        .def("StaticClass", &ULocationFilter_MustNotHaveLOS::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}