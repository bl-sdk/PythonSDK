#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USeqAct_MITV_Activate(py::object m)
{
    py::class_< USeqAct_MITV_Activate,  USequenceAction   >(m, "USeqAct_MITV_Activate")
        .def_readwrite("DurationOfMITV", &USeqAct_MITV_Activate::DurationOfMITV)
        .def("StaticClass", &USeqAct_MITV_Activate::StaticClass, py::return_value_policy::reference)
        .def("eventActivated", &USeqAct_MITV_Activate::eventActivated)
        .def("eventGetObjClassVersion", &USeqAct_MITV_Activate::eventGetObjClassVersion)
          ;
}