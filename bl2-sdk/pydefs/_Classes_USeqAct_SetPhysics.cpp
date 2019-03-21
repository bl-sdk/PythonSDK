#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_USeqAct_SetPhysics()
{
    class_< USeqAct_SetPhysics, bases< USequenceAction >  , boost::noncopyable>("USeqAct_SetPhysics", no_init)
        .def_readwrite("newPhysics", &USeqAct_SetPhysics::newPhysics)
        .def("StaticClass", &USeqAct_SetPhysics::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}