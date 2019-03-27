#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_USeqAct_ForceGarbageCollection(py::module &m)
{
    py::class_< USeqAct_ForceGarbageCollection,  USeqAct_Latent   >(m, "USeqAct_ForceGarbageCollection")
		.def_static("StaticClass", &USeqAct_ForceGarbageCollection::StaticClass, py::return_value_policy::reference)
          ;
}