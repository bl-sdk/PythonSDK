#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UGearboxSeqAct_DestroyPopulationActors(py::module &m)
{
    py::class_< UGearboxSeqAct_DestroyPopulationActors,  USeqAct_Latent   >(m, "UGearboxSeqAct_DestroyPopulationActors")
		.def_static("StaticClass", &UGearboxSeqAct_DestroyPopulationActors::StaticClass, py::return_value_policy::reference)
        .def_readwrite("Opportunities", &UGearboxSeqAct_DestroyPopulationActors::Opportunities)
        .def_readwrite("Encounters", &UGearboxSeqAct_DestroyPopulationActors::Encounters)
          ;
}