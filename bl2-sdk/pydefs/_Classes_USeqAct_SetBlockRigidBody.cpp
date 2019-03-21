#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_USeqAct_SetBlockRigidBody()
{
    class_< USeqAct_SetBlockRigidBody, bases< USequenceAction >  , boost::noncopyable>("USeqAct_SetBlockRigidBody", no_init)
        .def("StaticClass", &USeqAct_SetBlockRigidBody::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}