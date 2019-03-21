#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UGearboxSeqAct_DestroyPopulationActors()
{
    class_< UGearboxSeqAct_DestroyPopulationActors, bases< USeqAct_Latent >  , boost::noncopyable>("UGearboxSeqAct_DestroyPopulationActors", no_init)
        .def_readwrite("Opportunities", &UGearboxSeqAct_DestroyPopulationActors::Opportunities)
        .def_readwrite("Encounters", &UGearboxSeqAct_DestroyPopulationActors::Encounters)
        .def("StaticClass", &UGearboxSeqAct_DestroyPopulationActors::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}