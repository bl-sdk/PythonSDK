#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UAnimNotify_EnableHeadLookAt()
{
    class_< UAnimNotify_EnableHeadLookAt, bases< UAnimNotify >  , boost::noncopyable>("UAnimNotify_EnableHeadLookAt", no_init)
        .def_readwrite("HeadControlName", &UAnimNotify_EnableHeadLookAt::HeadControlName)
        .def("StaticClass", &UAnimNotify_EnableHeadLookAt::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}