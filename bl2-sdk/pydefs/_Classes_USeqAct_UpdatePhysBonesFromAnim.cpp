#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USeqAct_UpdatePhysBonesFromAnim(py::module &m)
{
    py::class_< USeqAct_UpdatePhysBonesFromAnim,  USequenceAction   >(m, "USeqAct_UpdatePhysBonesFromAnim")
        .def("StaticClass", &USeqAct_UpdatePhysBonesFromAnim::StaticClass, py::return_value_policy::reference)
        .def("eventGetObjClassVersion", &USeqAct_UpdatePhysBonesFromAnim::eventGetObjClassVersion)
          ;
}