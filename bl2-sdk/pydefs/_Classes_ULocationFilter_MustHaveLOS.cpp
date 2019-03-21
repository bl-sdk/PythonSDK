#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_ULocationFilter_MustHaveLOS()
{
    class_< ULocationFilter_MustHaveLOS, bases< ULocationFilter >  , boost::noncopyable>("ULocationFilter_MustHaveLOS", no_init)
        .def("StaticClass", &ULocationFilter_MustHaveLOS::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}