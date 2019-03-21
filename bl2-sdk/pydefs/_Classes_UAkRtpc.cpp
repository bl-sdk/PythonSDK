#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UAkRtpc()
{
    class_< UAkRtpc, bases< UAkObject >  , boost::noncopyable>("UAkRtpc", no_init)
        .def_readwrite("MinRange", &UAkRtpc::MinRange)
        .def_readwrite("MaxRange", &UAkRtpc::MaxRange)
        .def("StaticClass", &UAkRtpc::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}