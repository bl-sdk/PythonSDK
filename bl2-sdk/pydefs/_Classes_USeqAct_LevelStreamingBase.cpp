#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USeqAct_LevelStreamingBase(py::module &m)
{
    py::class_< USeqAct_LevelStreamingBase,  USeqAct_Latent   >(m, "USeqAct_LevelStreamingBase")
		.def_static("StaticClass", &USeqAct_LevelStreamingBase::StaticClass, py::return_value_policy::reference)
          ;
}