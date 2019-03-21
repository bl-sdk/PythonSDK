#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UBehavior_VectorToLocalSpace()
{
    class_< UBehavior_VectorToLocalSpace, bases< UBehaviorBase >  , boost::noncopyable>("UBehavior_VectorToLocalSpace", no_init)
        .def_readwrite("WorldSpaceVector", &UBehavior_VectorToLocalSpace::WorldSpaceVector)
        .def_readwrite("AttachmentPointName", &UBehavior_VectorToLocalSpace::AttachmentPointName)
        .def("StaticClass", &UBehavior_VectorToLocalSpace::StaticClass, return_value_policy< reference_existing_object >())
        .def("eventPublishBehaviorOutput", &UBehavior_VectorToLocalSpace::eventPublishBehaviorOutput)
        .def("ApplyBehaviorToContext", &UBehavior_VectorToLocalSpace::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}