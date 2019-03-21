#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UAkState()
{
    class_< UAkState, bases< UAkObject >  , boost::noncopyable>("UAkState", no_init)
        .def_readwrite("StateGroup", &UAkState::StateGroup)
        .def("StaticClass", &UAkState::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}