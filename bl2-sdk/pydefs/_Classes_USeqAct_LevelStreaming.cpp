#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_USeqAct_LevelStreaming()
{
    class_< USeqAct_LevelStreaming, bases< USeqAct_Latent >  , boost::noncopyable>("USeqAct_LevelStreaming", no_init)
        .def_readwrite("Level", &USeqAct_LevelStreaming::Level)
        .def_readwrite("LevelName", &USeqAct_LevelStreaming::LevelName)
        .def("StaticClass", &USeqAct_LevelStreaming::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}