
//------------------------------------------------------------------------------
// 
//     This code was generated by a tool.
//
//     Changes to this file may cause incorrect behavior and will be lost if
//     the code is regenerated.
// 
//------------------------------------------------------------------------------

// Generated from: ProtoBuff/CSharpAckMsg.proto
namespace LTLMoPCsharpInterface
{
    [global::System.Serializable, global::ProtoBuf.ProtoContract(Name=@"CSharpAckMsg")]
    public partial class CSharpAckMsg : global::ProtoBuf.IExtensible
    {
      public CSharpAckMsg() {}
      
    private int _id;
    [global::ProtoBuf.ProtoMember(1, IsRequired = true, Name=@"id", DataFormat = global::ProtoBuf.DataFormat.TwosComplement)]
    public int id
    {
      get { return _id; }
      set { _id = value; }
    }

    private int _status = default(int);
    [global::ProtoBuf.ProtoMember(2, IsRequired = false, Name=@"status", DataFormat = global::ProtoBuf.DataFormat.TwosComplement)][global::System.ComponentModel.DefaultValue(default(int))]
    public int status
    {
      get { return _status; }
      set { _status = value; }
    }

    private string _msg = "";
    [global::ProtoBuf.ProtoMember(3, IsRequired = false, Name=@"msg", DataFormat = global::ProtoBuf.DataFormat.Default)][global::System.ComponentModel.DefaultValue("")]
    public string msg
    {
      get { return _msg; }
      set { _msg = value; }
    }

    private LTLMoPCsharpInterface.CSharpAckMsg.Sensor _s1 = null;
    [global::ProtoBuf.ProtoMember(16, IsRequired = false, Name=@"s1", DataFormat = global::ProtoBuf.DataFormat.Default)][global::System.ComponentModel.DefaultValue(null)]
    public LTLMoPCsharpInterface.CSharpAckMsg.Sensor s1
    {
      get { return _s1; }
      set { _s1 = value; }
    }

    private LTLMoPCsharpInterface.CSharpAckMsg.Sensor _s2 = null;
    [global::ProtoBuf.ProtoMember(17, IsRequired = false, Name=@"s2", DataFormat = global::ProtoBuf.DataFormat.Default)][global::System.ComponentModel.DefaultValue(null)]
    public LTLMoPCsharpInterface.CSharpAckMsg.Sensor s2
    {
      get { return _s2; }
      set { _s2 = value; }
    }

    private LTLMoPCsharpInterface.CSharpAckMsg.Sensor _s3 = null;
    [global::ProtoBuf.ProtoMember(18, IsRequired = false, Name=@"s3", DataFormat = global::ProtoBuf.DataFormat.Default)][global::System.ComponentModel.DefaultValue(null)]
    public LTLMoPCsharpInterface.CSharpAckMsg.Sensor s3
    {
      get { return _s3; }
      set { _s3 = value; }
    }

    private LTLMoPCsharpInterface.CSharpAckMsg.Sensor _s4 = null;
    [global::ProtoBuf.ProtoMember(19, IsRequired = false, Name=@"s4", DataFormat = global::ProtoBuf.DataFormat.Default)][global::System.ComponentModel.DefaultValue(null)]
    public LTLMoPCsharpInterface.CSharpAckMsg.Sensor s4
    {
      get { return _s4; }
      set { _s4 = value; }
    }

    private LTLMoPCsharpInterface.CSharpAckMsg.Sensor _s5 = null;
    [global::ProtoBuf.ProtoMember(20, IsRequired = false, Name=@"s5", DataFormat = global::ProtoBuf.DataFormat.Default)][global::System.ComponentModel.DefaultValue(null)]
    public LTLMoPCsharpInterface.CSharpAckMsg.Sensor s5
    {
      get { return _s5; }
      set { _s5 = value; }
    }
    [global::System.Serializable, global::ProtoBuf.ProtoContract(Name=@"Sensor")]
    public partial class Sensor : global::ProtoBuf.IExtensible
    {
      public Sensor() {}
      

    private double _stat = default(double);
    [global::ProtoBuf.ProtoMember(1, IsRequired = false, Name=@"stat", DataFormat = global::ProtoBuf.DataFormat.TwosComplement)][global::System.ComponentModel.DefaultValue(default(double))]
    public double stat
    {
      get { return _stat; }
      set { _stat = value; }
    }
      private global::ProtoBuf.IExtension extensionObject;
      global::ProtoBuf.IExtension global::ProtoBuf.IExtensible.GetExtensionObject(bool createIfMissing)
        { return global::ProtoBuf.Extensible.GetExtensionObject(ref extensionObject, createIfMissing); }
    }
  
      private global::ProtoBuf.IExtension extensionObject;
      global::ProtoBuf.IExtension global::ProtoBuf.IExtensible.GetExtensionObject(bool createIfMissing)
        { return global::ProtoBuf.Extensible.GetExtensionObject(ref extensionObject, createIfMissing); }
    }
  
}