#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_USeqAct_ChangeCollision()
{
    class_< USeqAct_ChangeCollision, bases< USequenceAction >  , boost::noncopyable>("USeqAct_ChangeCollision", no_init)
        .def_readwrite("CollisionType", &USeqAct_ChangeCollision::CollisionType)
        .def("StaticClass", &USeqAct_ChangeCollision::StaticClass, return_value_policy< reference_existing_object >())
        .def("eventGetObjClassVersion", &USeqAct_ChangeCollision::eventGetObjClassVersion)
        .staticmethod("StaticClass")
  ;
}