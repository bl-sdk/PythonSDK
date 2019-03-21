#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USeqAct_AkLoadBank()
{
    py::class_< USeqAct_AkLoadBank,  USeqAct_Latent   >("USeqAct_AkLoadBank")
        .def("StaticClass", &USeqAct_AkLoadBank::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}