#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_USeqAct_SetRigidBodyIgnoreVehicles()
{
    class_< USeqAct_SetRigidBodyIgnoreVehicles, bases< USequenceAction >  , boost::noncopyable>("USeqAct_SetRigidBodyIgnoreVehicles", no_init)
        .def("StaticClass", &USeqAct_SetRigidBodyIgnoreVehicles::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}