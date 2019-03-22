#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowSeqAct_ColiseumAwardCertificate(py::module &m)
{
    py::class_< UWillowSeqAct_ColiseumAwardCertificate,  USequenceAction   >(m, "UWillowSeqAct_ColiseumAwardCertificate")
        .def("eventActivated", &UWillowSeqAct_ColiseumAwardCertificate::eventActivated)
          ;
}