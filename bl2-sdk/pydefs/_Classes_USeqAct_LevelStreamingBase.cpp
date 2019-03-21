#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USeqAct_LevelStreamingBase()
{
    py::class_< USeqAct_LevelStreamingBase,  USeqAct_Latent   >("USeqAct_LevelStreamingBase")
        .def("StaticClass", &USeqAct_LevelStreamingBase::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}