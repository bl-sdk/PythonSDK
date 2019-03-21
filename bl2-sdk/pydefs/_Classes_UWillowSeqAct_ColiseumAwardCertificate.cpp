#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowSeqAct_ColiseumAwardCertificate(py::object m)
{
    py::class_< UWillowSeqAct_ColiseumAwardCertificate,  USequenceAction   >(m, "UWillowSeqAct_ColiseumAwardCertificate")
        .def("StaticClass", &UWillowSeqAct_ColiseumAwardCertificate::StaticClass, py::return_value_policy::reference)
        .def("eventActivated", &UWillowSeqAct_ColiseumAwardCertificate::eventActivated)
          ;
}