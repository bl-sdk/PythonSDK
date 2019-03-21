#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USeqAct_UpdatePhysBonesFromAnim()
{
    py::class_< USeqAct_UpdatePhysBonesFromAnim,  USequenceAction   >("USeqAct_UpdatePhysBonesFromAnim")
        .def("StaticClass", &USeqAct_UpdatePhysBonesFromAnim::StaticClass, py::return_value_policy::reference)
        .def("eventGetObjClassVersion", &USeqAct_UpdatePhysBonesFromAnim::eventGetObjClassVersion)
        .staticmethod("StaticClass")
  ;
}