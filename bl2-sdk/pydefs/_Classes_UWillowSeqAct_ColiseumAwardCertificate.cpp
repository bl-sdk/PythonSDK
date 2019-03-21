#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowSeqAct_ColiseumAwardCertificate()
{
    py::class_< UWillowSeqAct_ColiseumAwardCertificate,  USequenceAction   >("UWillowSeqAct_ColiseumAwardCertificate")
        .def("StaticClass", &UWillowSeqAct_ColiseumAwardCertificate::StaticClass, py::return_value_policy::reference)
        .def("eventActivated", &UWillowSeqAct_ColiseumAwardCertificate::eventActivated)
        .staticmethod("StaticClass")
  ;
}