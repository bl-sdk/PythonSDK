#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UGearboxSeqAct_PawnClonerLink()
{
    class_< UGearboxSeqAct_PawnClonerLink, bases< USeqAct_Latent >  , boost::noncopyable>("UGearboxSeqAct_PawnClonerLink", no_init)
        .def_readwrite("ClonePoints", &UGearboxSeqAct_PawnClonerLink::ClonePoints)
        .def_readwrite("SpawnedCount", &UGearboxSeqAct_PawnClonerLink::SpawnedCount)
        .def_readwrite("RemainingDelay", &UGearboxSeqAct_PawnClonerLink::RemainingDelay)
        .def("StaticClass", &UGearboxSeqAct_PawnClonerLink::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}