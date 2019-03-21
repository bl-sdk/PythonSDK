#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_USearchDirection_AwayFromMe()
{
    class_< USearchDirection_AwayFromMe, bases< USearchDirection >  , boost::noncopyable>("USearchDirection_AwayFromMe", no_init)
        .def("StaticClass", &USearchDirection_AwayFromMe::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}