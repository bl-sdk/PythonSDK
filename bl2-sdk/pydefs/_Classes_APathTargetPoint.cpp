#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_APathTargetPoint()
{
    class_< APathTargetPoint, bases< AKeypoint >  , boost::noncopyable>("APathTargetPoint", no_init)
        .def("StaticClass", &APathTargetPoint::StaticClass, return_value_policy< reference_existing_object >())
        .def("ShouldBeHiddenBySHOW_NavigationNodes", &APathTargetPoint::ShouldBeHiddenBySHOW_NavigationNodes)
        .staticmethod("StaticClass")
  ;
}