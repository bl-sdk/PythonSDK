#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_USeqAct_MultiLevelStreaming()
{
    class_< USeqAct_MultiLevelStreaming, bases< USeqAct_LevelStreamingBase >  , boost::noncopyable>("USeqAct_MultiLevelStreaming", no_init)
        .def_readwrite("Levels", &USeqAct_MultiLevelStreaming::Levels)
        .def("StaticClass", &USeqAct_MultiLevelStreaming::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}