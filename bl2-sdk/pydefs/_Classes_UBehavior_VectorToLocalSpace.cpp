#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UBehavior_VectorToLocalSpace()
{
    py::class_< UBehavior_VectorToLocalSpace,  UBehaviorBase   >("UBehavior_VectorToLocalSpace")
        .def_readwrite("WorldSpaceVector", &UBehavior_VectorToLocalSpace::WorldSpaceVector)
        .def_readwrite("AttachmentPointName", &UBehavior_VectorToLocalSpace::AttachmentPointName)
        .def("StaticClass", &UBehavior_VectorToLocalSpace::StaticClass, py::return_value_policy::reference)
        .def("eventPublishBehaviorOutput", &UBehavior_VectorToLocalSpace::eventPublishBehaviorOutput)
        .def("ApplyBehaviorToContext", &UBehavior_VectorToLocalSpace::ApplyBehaviorToContext)
        .staticmethod("StaticClass")
  ;
}