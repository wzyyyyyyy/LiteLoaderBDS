// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
class EquipmentTableDefinition {

public:
    MCAPI void deserializeData(struct DeserializeDataParams);
    MCAPI void serializeData(class Json::Value&) const;

    MCAPI static void buildSchema(class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, struct EquipmentTableDefinition>>&);
};