#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UGearboxSeqAct_DestroyPopulationActors(py::object m)
{
    py::class_< UGearboxSeqAct_DestroyPopulationActors,  USeqAct_Latent   >(m, "UGearboxSeqAct_DestroyPopulationActors")
        .def_readwrite("Opportunities", &UGearboxSeqAct_DestroyPopulationActors::Opportunities)
        .def_readwrite("Encounters", &UGearboxSeqAct_DestroyPopulationActors::Encounters)
        .def("StaticClass", &UGearboxSeqAct_DestroyPopulationActors::StaticClass, py::return_value_policy::reference)
          ;
}